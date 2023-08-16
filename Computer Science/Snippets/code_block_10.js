class Database {
    function saveData(data) { // Save data logic }
}

class UserManager {
    private database
    function UserManager() { this.database = new Database() }
    function saveUserData(data) { this.database.saveData(data) }
}
