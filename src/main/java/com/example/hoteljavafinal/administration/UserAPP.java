package com.example.hoteljavafinal.administration;

import jakarta.persistence.*;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.util.UUID;

@Entity
@Data
@NoArgsConstructor
@AllArgsConstructor
@Table(name = "users")
public class UserAPP {

    @Id
    @GeneratedValue(strategy = GenerationType.UUID)
    private UUID id;
    private RoleAPP role;

}
