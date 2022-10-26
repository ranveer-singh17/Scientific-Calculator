
pipeline {

    agent any

    stages {
        
       

//         stage('Code Checkout') {
//             steps {
//                 checkout([
//                     $class: 'GitSCM', 
//                     branches: [[name: '*/master']], 
//                     userRemoteConfigs: [[url: 'https://github.com/ranveer-singh17/Scientific-Calculator.git']]
//                 ])
//             }
//         }

//         stage('SCM') {
//             steps{
//                 checkout scm
//             }
//   }

        stage('Build  Code') {
//             when {
//                 branch 'develop'
//             }
            steps {
                bat 'make build'

//                 bat 'echo Deploying'
//                 bat 'echo web-hook working'
            }
        }

        stage('Testing'){
            steps{
                parallel Unit_Testing:{
                    bat'echo running unit test cases'
                }, code_analysis:{
                    // bat 'C:\Program Files\OpenCppCoverage\OpenCppCoverage.exe --sources MySource --export_type=cobertura -- output.exe'
                    },
                    failFast:true

                }
            }
        }
        
   
      

 

    
    post{
        //cleanWs(cleanWhenNotBuilt: false)
        always{
            mail to: "ranveersingh7600454082@gmail.com",
            subject: "Test Email",
            body: "Hooray, The webhook is working fine"
        }
    }
}

