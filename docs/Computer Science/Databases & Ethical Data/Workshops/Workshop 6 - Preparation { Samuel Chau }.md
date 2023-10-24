## Question 1

```
List four physical threats and how you would protect from attacks on those vectors.
```

1. Natural Disasters:
- **Threat**: Natural disasters such as hurricanes, earthquakes, floods, or tornadoes can cause significant damage to physical infrastructures, leading to data loss or disruption in services.
- **Protection**: Implement disaster recovery plans that include off-site backups and redundant systems located in different geographical areas. Regularly test disaster recovery plans to ensure they work effectively. Also, use physical barriers and protections designed for specific types of disasters (e.g., flood barriers, earthquake-resistant building designs).

2. Fires:
- **Threat**: Fires can destroy hardware, data, and entire facilities. They can be caused by various factors, including electrical issues, natural events, or accidents.
- **Protection**: Install fire detection (smoke detectors) and suppression systems (sprinklers or gas-based systems) throughout the facility. Use fireproof materials for critical infrastructure where possible. Regularly inspect and maintain electrical systems and manage flammable materials responsibly. Again, off-site backups are critical for data recovery.

3. Electrical Outages:
- **Threat**: Power outages can disrupt operations, cause data loss, or damage systems through improper shutdowns or power surges.
- **Protection**: Use uninterruptible power supplies (UPS) for critical systems to allow for proper shutdown or continued operations during short outages. Implement backup generators to provide power during extended outages. Employ surge protectors to prevent damage from power surges.

4. Social Engineering:
- **Threat**: Manipulating individuals into revealing sensitive information or performing actions that compromise security.
- **Protection**: Conduct regular security awareness training for all employees to recognize and resist social engineering attempts. Establish policies for handling sensitive information and verify identities before disclosing confidential information. Employ a principle of least privilege: don't provide any user with more access than they need to perform their job.

## Question 2

```
List four digital threats and how you would protect from attacks on those vectors.
```

1. Network Attacks:
   - **Threat**: These involve unauthorized actions targeted at disrupting, degrading, or destroying the integrity of data in transit over a network. Examples include Denial of Service (DoS) attacks, Man-in-the-Middle (MitM) attacks, and packet sniffing.
   - **Protection**: Implement robust network security measures such as firewalls and secure network protocols like HTTPS and SSL/TLS for data transmission. Regularly update and patch network devices. Also, conduct routine network security assessments and penetration testing.

2. Console Attacks:
   - **Threat**: Console attacks are direct attacks on a system, usually gained by having physical access to a device or remote access to the system console. Once access is gained, an attacker can execute malicious commands or alter system configurations.
   - **Protection**: Use strong access controls for system consoles, including multi-factor authentication. Regularly update and patch operating systems and applications. 

3. Worms:
   - **Threat**: Worms are malware that replicate themselves to spread to other computers over a network, often causing harm by consuming bandwidth or sending spam.
   - **Protection**: Employ updated antivirus and antimalware software on all systems and perform regular system scans. Use firewalls to control network traffic. Conduct regular security awareness training for employees to prevent phishing attacks, which are often used to deliver worms. Also, keep all systems patched and up-to-date.

4. Backdoors:
   - **Threat**: Backdoors are typically malicious software or hardware mechanisms designed to bypass normal authentication or encryption in a system, allowing unauthorized remote access.
   - **Protection**: Regularly perform security audits and code reviews to detect backdoors in software and hardware. Employ comprehensive endpoint security solutions and maintain updated firewalls. 

## Question 3 

```
Give an example of data inconsistency and how it could occur.
```

- Consider a banking transaction involving two accounts: Account A transfers an amount of x dollars to Account B. A data inconsistency would arise if the amount is deducted from Account A but not credited to Account B.

- This inconsistency can occur due to a variety of reasons, such as system crashes or failures during the transaction process, database write errors, or a break in the transaction sequence due to network issues. If there isn't a proper mechanism in place to ensure atomicity (where the whole transaction is either completed fully or rolled back entirely), such inconsistencies can persist, leading to discrepancies in account balances and potential issues in account reconciliation.
## Question 4  

```
Give an example of a NOSQL database and its uses.
```

## Question 5

```
What are the overheads of NOSQL databases when compared against SQL databases? What are the benefits?
```