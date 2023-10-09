interface DataHandler {
    function readData()
    function writeData(data)
}

class DataReader implements DataHandler {
    function readData() {
        // Read data logic
    }

    function writeData(data) {
        // Not applicable for DataReader
    }
}
