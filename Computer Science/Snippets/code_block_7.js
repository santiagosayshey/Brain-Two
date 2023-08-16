class Transport {
    function startEngine() {
        // Start engine logic
    }
}

class Bicycle extends Transport {
    function startEngine() {
        // Bicycles don't have engines - LSP violation
    }
}
