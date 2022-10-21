
pipeline {

    agent {
        node {
            label 'master'
        }
    }

    options {
        buildDiscarder logRotator( 
                    daysToKeepStr: '16', 
                    numToKeepStr: '10'
            )
    }

    stages {
        
        stage('Cleanup Workspace') {
            steps {
                cleanWs()
                sh """
                echo "Cleaned Up Workspace For Project"
                """
            }
        }

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
                sh """
                echo "Running Unit Tests"
                """
            }
        }

        stage('Code Analysis') {
            steps {
                sh """
                echo "Running Code Analysis"
                """
            }
        }

        stage('Build Deploy Code') {
            when {
                branch 'develop'
            }
            steps {
                bat 'g++ main.cpp -o a.exe'
                bat 'a.exe'

                sh """
                echo "Deploying Code"
                """
            }
        }

    }
    post{
        always{
            mail to: "ranveersingh7600454082@gmail.com",
            subject: "Test Email",
            body: "Test"
        }
    }
}
