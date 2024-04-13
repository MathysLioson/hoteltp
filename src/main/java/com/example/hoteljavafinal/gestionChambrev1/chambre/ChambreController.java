package com.example.hoteljavafinal.gestionChambrev1.chambre;

import com.example.hoteljavafinal.gestionChambrev1.chambre.exceptions.ChambreNotFoundException;
import lombok.AllArgsConstructor;
import org.springframework.http.HttpStatus;
import org.springframework.web.bind.annotation.*;

import java.util.List;
import java.util.UUID;

@AllArgsConstructor
@RestController
@CrossOrigin("*")
@RequestMapping(path = "/chambres")
public class ChambreController {

    private ChambreService chambreService;

    @GetMapping("/hello")
    public String hello() {
        return "hello";
    }

    @GetMapping("/")
    public List<ChambreEntity> getAllChambres() {
        return chambreService.getAllChambres();
    }

    @GetMapping("/{id}")
    public ChambreEntity getChambreById(@PathVariable(name = "id")UUID id) throws ChambreNotFoundException {
        return chambreService.getChambreById((id));
    }

//    @GetMapping("/chambres/anettoyer") TODO PLUS TARD
//    public List<ChambreEntity> getAllChambreANettoyer() {
//        return chambreService.getAllChambreANettoyer();
//    }

    /**
     * **************************************
     * *                                    *
     * *            POST Method             *
     * *                                    *
     * **************************************
     */
    @PostMapping("/")
    @ResponseStatus(HttpStatus.CREATED)
    public ChambreEntity saveChambre(@RequestBody ChambreEntity chambreEntity) {
        return chambreService.saveChambre(chambreEntity);
    }
    /**
     * **************************************
     * *                                    *
     * *            PUT Method              *
     * *                                    *
     * **************************************
     */
    @PutMapping("/{id}")
    @ResponseStatus(HttpStatus.OK)
    public ChambreEntity updateChambre(@PathVariable UUID id, @RequestBody ChambreEntity chambreEntity) {
        chambreEntity.setId(id);
        return chambreService.updateChambre(chambreEntity);
    }
    /**
     * **************************************
     * *                                    *
     * *           DELETE Method            *
     * *                                    *
     * **************************************
     */
    @DeleteMapping("/{id}")
    @ResponseStatus(HttpStatus.NO_CONTENT)
    public void deleteChambre(@PathVariable UUID id) {
        chambreService.deleteChambre(id);
    }
}
