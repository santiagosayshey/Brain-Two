class EmailService {
    function sendEmail(recipient, message) {
        // Send email logic
    }
}

class NotificationManager {
    private emailService

    function NotificationManager() {
        this.emailService = new EmailService()
    }

    function sendEmailNotification(recipient, message) {
        this.emailService.sendEmail(recipient, message)
    }
}
