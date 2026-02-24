section "o02_m7_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(7, 130) < 3){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("", 7, "O0207000_G00000");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝,\ncongratulations.\nYou were fast like a cheetah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nAll of that hard work paid off.)");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("", 7, "O0207000_G00100");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, 1st place,\ncongratulations.\nI applaud you for your hard work!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nAll of that hard work paid off.)");
            }
        else {
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("O0207000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "1st place, congratulations.\nMay I boast about you to the other\nteachers?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nAll of that hard work paid off.)");
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(7, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("O0207000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "2nd place, good work.\nYou were like an antelope.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Disappointing...\nI should have tried a little\nmore...)");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 3, 3);
            Character_BlinkStart(7, 2, (#1));
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("O0207000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Good work.\n2nd place is a bit disappointing,\nbut you still get a prize.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Disappointing...\nI should have tried a little\nmore...)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Character_BlinkStart(7, 2, (#1));
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("", 7, "O0207000_G00500");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, welcome home.\nI am impressed that you didn't give\nup at the last minute.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Disappointing...\nI should have tried a little\nmore...)");
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(7, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("O0207000_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Hey, it's the slow donkey in 3rd\nplace.\nPlease drink some tea and rest.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Is this such a bad thing?)");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("O0207000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "...\nI think you ran out of fuel, right?\nYou can run faster after you eat.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Is this such a bad thing?)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("O0207000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I'm disappointed.\nBut since you ran the whole\ndistance, you did your best and got\na prize.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Is this such a bad thing?)");
            }
        }
    else {
        if (Parameter_GetCh1Param(7, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("O0207000_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Ah, I discovered the turtle.\nI got nervous when I saw you could\nrun the whole distance.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have worked harder...)");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 4);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("O0207000_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "...\nThe revolution of track and field.\nThe original form to run.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have worked harder...)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("", 7, "O0207000_G01100");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nI think you should think while you\nrun.\nSurely that's the reason?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have worked harder...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
