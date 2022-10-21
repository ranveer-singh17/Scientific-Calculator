pipeline {
    agent any

    stages {
        stage ('Build') {
            steps {
                bat 'g++ scientific.cpp -o a.exe'
                bat 'a.exe'
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
