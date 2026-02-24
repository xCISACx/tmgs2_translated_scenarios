section "z63_pl_007"{
    System_GlobalWork(0, 0, 0);
    if (Parameter_GetPl1Param(24) == 0){
        Message_MsgSel("Take the university entrance exam", "Take the employment exam instead", "Enter a first-rate sports university");
        switch (Message_TextSelect()){
            case 0:
            Message_Who(0);
            Message_MsgDisp("主人公", "I'll take a university exam!\nWhich university exam should I take?");
            Message_MsgSel("First-rate university", "Second-rate university", "Third-rate university");
            switch (Message_TextSelect()){
                case 0:
                Parameter_InPl1Param(15, Parameter_SinroJudge(1));
                Message_Who(0);
                Message_MsgDisp("主人公", "A first-rate university.\nI'm gonna aim for the top!");
                break ;
                case 1:
                Parameter_InPl1Param(15, Parameter_SinroJudge(2));
                Message_Who(0);
                Message_MsgDisp("主人公", "A second-rate university.\nI have to remain calm and\nlevel-headed.");
                break ;
                case 2:
                Parameter_InPl1Param(15, Parameter_SinroJudge(3));
                Message_Who(0);
                Message_MsgDisp("主人公", "I intend to make it to a third-rate\nuniversity.\nThis will be good for me.");
                break ;
                }
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "I want to find employment!\nWhich company should I choose?");
            Message_MsgSel("First-rate company", "Second-rate company", "Third-rate company");
            switch (Message_TextSelect()){
                case 0:
                Parameter_InPl1Param(15, Parameter_SinroJudge(4));
                Message_Who(0);
                Message_MsgDisp("主人公", "I'll make it to a first-rate\ncompany.\nI'm aiming for the top!");
                break ;
                case 1:
                Parameter_InPl1Param(15, Parameter_SinroJudge(5));
                Message_Who(0);
                Message_MsgDisp("主人公", "I'll make it to a second-rate\ncompany.\nI have to remain calm and\nlevel-headed.");
                break ;
                case 2:
                Parameter_InPl1Param(15, Parameter_SinroJudge(6));
                Message_Who(0);
                Message_MsgDisp("主人公", "I'll make it to a third-rate\ncompany.\nThis will be good for me.");
                break ;
                }
            break ;
            case 2:
            System_GlobalWork(0, 0, 1);
            Parameter_InPl1Param(15, Parameter_SinroJudge(15));
            Message_Who(0);
            Message_MsgDisp("主人公", "I'll use the experience gained in\nthe club.\nI'll take the exam for this\nuniversity!");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Message_Who(0);
            Message_MsgDisp("主人公", "... The application is complete.\nNow I have to wait for the letter to\narrive.");
            break ;
            }
        }
    else {
        Message_MsgSel("Take an employment exam", "Take the university entrance exam instead", "Enter a first-rate sports university");
        switch (Message_TextSelect()){
            case 0:
            Message_Who(0);
            Message_MsgDisp("主人公", "Employment exam!\nWhich company should I choose?");
            Message_MsgSel("First-rate company", "Second-rate company", "Third-rate company");
            switch (Message_TextSelect()){
                case 0:
                Parameter_InPl1Param(15, Parameter_SinroJudge(4));
                Message_Who(0);
                Message_MsgDisp("主人公", "A first-rate company.\nI'm aiming for the top!");
                break ;
                case 1:
                Parameter_InPl1Param(15, Parameter_SinroJudge(5));
                Message_Who(0);
                Message_MsgDisp("主人公", "A second-rate company.\nI have to remain calm and\nlevel-headed.");
                break ;
                case 2:
                Parameter_InPl1Param(15, Parameter_SinroJudge(6));
                Message_Who(0);
                Message_MsgDisp("主人公", "A third-rate company.\nIt'll be good for me.");
                break ;
                }
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "A university entrance exam!\nWhich university exam should I take?");
            Message_MsgSel("First-rate university", "Second-rate university", "Third-rate university");
            switch (Message_TextSelect()){
                case 0:
                Parameter_InPl1Param(15, Parameter_SinroJudge(1));
                Message_Who(0);
                Message_MsgDisp("主人公", "I'll make it to a first-rate\nuniversity.\nI'll aim for the top!");
                break ;
                case 1:
                Parameter_InPl1Param(15, Parameter_SinroJudge(2));
                Message_Who(0);
                Message_MsgDisp("主人公", "I'll make it to a second-rate\nuniversity.\nI have to remain calm and\nlevel-headed.");
                break ;
                case 2:
                Parameter_InPl1Param(15, Parameter_SinroJudge(3));
                Message_Who(0);
                Message_MsgDisp("主人公", "I'll make it to a third-rate\nuniversity.\nIt'll be good for me.");
                break ;
                }
            break ;
            case 2:
            System_GlobalWork(0, 0, 1);
            Parameter_InPl1Param(15, Parameter_SinroJudge(15));
            Message_Who(0);
            Message_MsgDisp("主人公", "I'll use the experience gained in\nthe club.\nI'll take the exam for this\nuniversity!");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Message_Who(0);
            Message_MsgDisp("主人公", "... The application is complete.\nNow I have to wait for the letter to\narrive.");
            break ;
            }
        }
    }
