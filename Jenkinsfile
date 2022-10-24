
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

        stage('SCM') {
    checkout scm
  }

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
   
      
//          stage(' Unit Testing') {
//             steps {
//                 bat 'echo Running Unit Tests'
               
//         }
 
  stage('SonarQube Analysis') {
    def scannerHome = tool 'SonarScanner';
    withSonarQubeEnv() {
      bat '${scannerHome}/bin/sonar-scanner'
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
