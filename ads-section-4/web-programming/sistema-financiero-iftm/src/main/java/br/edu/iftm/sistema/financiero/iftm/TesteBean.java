/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.edu.iftm.sistema.financiero.iftm;

import javax.inject.Named;
import javax.enterprise.context.SessionScoped;
import java.io.Serializable;

@Named
@SessionScoped
public class TesteBean implements Serializable {
    private String hello = "Olá mundo";
    
    public String getHello() {
        return hello;
    }
}
