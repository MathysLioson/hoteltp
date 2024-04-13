package com.example.hoteljavafinal.gestionChambrev1.hotel;

import com.example.hoteljavafinal.administration.users.RoleAPP;
import com.example.hoteljavafinal.gestionChambrev1.chambre.ChambreEntity;
import com.example.hoteljavafinal.gestionChambrev1.hotel.exceptions.DroitInsuffisantException;
import lombok.AllArgsConstructor;
import lombok.NoArgsConstructor;

import java.util.Date;
import java.util.List;

@NoArgsConstructor
@AllArgsConstructor
public class HotelManager {

    /**
     * **************************************
     * *                                    *
     * *            GET Method              *
     * *                                    *
     * **************************************
     */
    public List<ChambreEntity> chambresHotels;
    public List<ChambreEntity> getChambresDisponibles(Date dateDebut, RoleAPP roleAPP) {
        return null;
    }
    public List<ChambreEntity> getAllChambresDisponibleToday(RoleAPP roleAPP) {
        return null;
    }
    public List<ChambreEntity> getAllChambresDisponible(RoleAPP roleAPP, Date dateDebut, Date dateFin) {
        return null;
    }

    public List<ChambreEntity> reserverUneChambre(RoleAPP roleAPP, Date dateDebut, Date dateFin, ChambreEntity chambreEntity) throws DroitInsuffisantException {
        if (roleAPP != RoleAPP.MANAGER) {
            throw new DroitInsuffisantException();
        }
        return null;
    }

}
