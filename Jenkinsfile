
pipeline {

    agent any

    stages {
        
       

//         stage('Code Checkout') {
//             steps {
//                 checkout([
//                     $class: 'GitSCM', 
//                     branches: [[name: '*/main']], 
//                     userRemoteConfigs: [[url: 'https://github.com/spring-projects/spring-petclinic.git']]
//                 ])
//             }
//         }

       

        stage('Build  Code') {
//             when {
//                 branch 'develop'
//             }
            steps {
                bat 'g++ main.cpp -o a.exe'
                bat 'a.exe'

//                 bat 'echo Deploying'
//                 bat 'echo web-hook working'
            }
        }
   
      
         stage(' Unit Testing') {
            steps {
                bat 'echo Running Unit Tests'
                bat 'sonar-scanner.bat -D"sonar.projectKey=Demo_1" -D"sonar.sources=." -D"sonar.host.url=http://localhost:9000" -D"sonar.login=sqp_61c5b1313f13350d4c46b57b814ba94552b4bc1e"'
            }
        }

//         stage('Code Analysis') {
//             steps {
//                 bat 'echo Running Code Analysis'
//             }
//         }

    }
    post{
        //cleanWs(cleanWhenNotBuilt: false)
        always{
            mail to: "ranveersingh7600454082@gmail.com",
            subject: "Test Email",
            body: "Hurray, The wehook is working fine"
        }
    }
}
