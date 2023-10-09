interface Vehicle {
    function startEngine()
    function stopEngine()
    function honk()
}
class Bicycle implements Vehicle {
    function startEngine() { // Not applicable for Bicycle }
    function stopEngine() { // Not applicable for Bicycle }
    function honk() { // Honk logic}
}
