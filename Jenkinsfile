
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

        stage(' Unit Testing') {
            steps {
                bat 'echo Running Unit Tests'
            }
        }

        stage('Code Analysis') {
            steps {
                bat 'echo Running Code Analysis'
            }
        }

        stage('Build Deploy Code') {
            when {
                branch 'develop'
            }
            steps {
                bat 'g++ main.cpp -o a.exe'
                bat 'a.exe'

                bat 'echo Deploying'
                bat 'echo web-hook working'
            }
        }

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
