<?php

include "processor.php";
include "ram.php";
include "disk.php";

class Pc {
    private $Name;
    private $proObj;
    private $ramObj;      
    private $diskObj;       
    private $totalPrice;    

    // constructor
    function __construct($proObj, $ramObj, $diskObj, $totalPrice) {
        $this->proObj = $proObj;
        $this->ramObj = $ramObj;
        $this->diskObj = $diskObj;
        $this->totalPrice = $totalPrice;
    }

    // setter and getter
    function setProcessor($proObj) {
        $this->proObj = $proObj;
    }

    function getProcessor() {
        return $this->proObj;
    }

    function setRAM($ramObj) {
        $this->ramObj = $ramObj;
    }

    function getRAM() {
        return $this->ramObj;
    }

    function setDisk($diskObj) {
        $this->diskObj = $diskObj;
    }

    function getDisk() {
        return $this->diskObj;
    }

    function setTotalPrice($totalPrice) {
        $this->totalPrice = $totalPrice;
    }

    function getTotalPrice() {
        return $this->totalPrice;
    }

    // method
    function printPC() {
        $this->proObj->printProcessor();
        $this->ramObj->printRAM();
        $this->diskObj->printDisk();
        echo "Total Price       : ". $this->getTotalPrice(). "<br>";
    }
}

?>