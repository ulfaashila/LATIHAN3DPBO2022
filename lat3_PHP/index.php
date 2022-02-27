<?php
include "PC.php";

$proObj = new Processor("Core i5", 6000000);
$ramObj = new Ram("32GB", 5500000);
$diskObj = new Disk("SSD", "1TB", 7500000);
$totalPrice = $proObj->getPrice() + $ramObj->getPrice() + $diskObj->getPrice();
$PCObj = new Pc($proObj, $ramObj, $diskObj, $totalPrice);
echo "======DATA PC====== <br>";
$PCObj->printPC();

?>
