# Lab 5 Operating System Report
**Deadlock**: A situation where the resources needed by a job to finish execution are held by another job, which in turn, is waiting for other resources to become available.  Also termed **deadly embrace**.

The **Banker algorithm**, sometimes referred to as the **detection algorithm**, is a resource allocation and deadlock avoidance algorithm developed by Edsger Dijkstra that tests for safety by simulating the allocation of predetermined maximum possible amounts of all resources, and then makes an "safe-state" check to test for possible deadlock conditions for all other pending activities, before deciding whether allocation should be allowed to continue.

# Banker's Algorithm coding
**CODE**
![enter image description here](https://photos-6.dropbox.com/t/2/AAD5Lob3J28SVaN1ArUcY0WihX2INL48KSn-xwCFkxMcvQ/12/599811388/jpeg/32x32/3/1524067200/0/2/L51.JPG/EJDCnesEGJFAIAIoAg/2cjsXi6NMlKFzj4SJpLnlu9Zmfo55SHj6OiGmNmU01E?dl=0&size=2048x1536&size_mode=3)
In this part of the code, user is requested to enter the number of processes and and resources. It also requests for the total number of each resources. Following up with that, the user is then prompted by asking maximum resources for each process and allocated resources for each process. The requested values are than mapped to their respective matrix.

![enter image description here](https://photos-6.dropbox.com/t/2/AAB2zYPXTGuqctZzmfhBEaXloUTAgeUC6NtPZu2Mhl9pZw/12/599811388/jpeg/32x32/3/1524070800/0/2/L52.JPG/EJDCnesEGJFAIAIoAg/lmMOrvZpiVRvRcZuA8v1le6OzAwQYJLYy4PH1ywr4mA?dl=0&size=2048x1536&size_mode=3)
This code shows that the available resources is calculated where the allocation is summed up and the total resources of particular process is reduced from the summed value.

![
](https://photos-2.dropbox.com/t/2/AADAMDkeL-5M2ES1A2_wiJh7hIEFebKEU1zQHphkVQ6NzQ/12/599811388/jpeg/32x32/3/1524070800/0/2/L53.JPG/EJDCnesEGJFAIAIoAg/IGW3xq12qDSkWSHRnhee1J0fzV1TFeXK_grqLL9VhYg?dl=0&size=2048x1536&size_mode=3)  
In this part of code it maps the number of needed resource to each process. It is calculated by reducing the maximum resources from allocated resources. Later all the three tables which are Allocated Resources, Maximum Resources and Needed Resources are printed out respectively

![
](https://photos-2.dropbox.com/t/2/AADwoj7uM2bRGOwU0jCRC0qDkH173OSKcYcKFRC53A9DjA/12/599811388/jpeg/32x32/3/1524070800/0/2/L54.JPG/EJDCnesEGJFAIAIoAg/y6Bm8GXeLZc7-7qSBALs8HC-t5jbOZymF4AVjN2cXrU?dl=0&size=2048x1536&size_mode=3)
This code actually first checks whether the available resources can accommodate the needed resources. If can it proceeds by notifying that the process is completed. Then a calculation of all matrices are done to update the three tables. All these processes happens in a "do - while" loop. Finally there is a code that compares to determine whether the system is safe or not.

**OUTPUT**
![
](https://photos-2.dropbox.com/t/2/AADMNCQHg8kf0_L_AvTbqzupZPwyaz7rmQ18f27YrN90uA/12/599811388/jpeg/32x32/3/1524070800/0/2/L55.JPG/EJDCnesEGJFAIAIoAg/p2jDikM9Rr3Y9LLgnQCG94Ll2qHNUv8CCan87piZFyI?dl=0&size=2048x1536&size_mode=3)
This is the sample output of safe state system!!!

![
](https://photos-4.dropbox.com/t/2/AAA7-cnfY-tPlEI1RbD-UYYcYvsLoY6rB-c57p3oJx0edw/12/599811388/jpeg/32x32/3/1524070800/0/2/L56.JPG/EJDCnesEGJJAIAIoAg/IULgoY0nBboq2uEEPfEJzlE7wrt1mJGCb9dYbfE40fU?dl=0&size=2048x1536&size_mode=3)
This is the sample output of unsafe state system!!!

