section "o02_m5_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(5, 130) < 3){
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0205000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I didn't think sprinting was your\nforte～.\nI was shocked.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay. It was worth doing my best!)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("", 5, "O0205000_E00100");
            Message_Who(5);
            Message_MsgDisp("Chris", "Congrats, ｛主人公｝～.\nYou are cool, winning first place▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay. It was worth doing my best!)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0205000_E00200", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You were cute and cool when you cut\nthrough the tape～.\nCongrats, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay. It was worth doing my best!)");
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(5, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0205000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The person in 1st place was so fast\nthat no one could beat her.\nCongrats on 2nd place▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that was unfortunate!)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 2, 2);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0205000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You were close...\nYou would've gotten 1st place if you\nstuck out your hand....\nIs that bad?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that was unfortunate!)");
            }
        else {
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0205000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You were really close...\nBut including things like cuteness,\nyou win 1st place in the Chris Cup▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that was unfortunate!)");
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(5, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0205000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Everyone you were racing against was\nfast.\n3rd place is still amazing.\nYou've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*...\nMaybe I should have tried harder...)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0205000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The result was bad, but you came\nnumber 1 in how cute you look when\nrunning▼ You've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*...\nMaybe I should have tried harder...)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 2, (#1));
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0205000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Even if you're worried about your\nrank, isn't it fine?\nYou were heaps radiant, aiming for\nthe finish line.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*...\nMaybe I should have tried harder...)");
            }
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(5, "M5_08F", 0);
        if (Parameter_GetCh1Param(5, 130) < 3){
            Voice_PlayVoice("O0205000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That was bad luck.\nBut you were definitely number 1 in\nterms of cuteness▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, this is no good...)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Voice_PlayVoice("O0205000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Your sexy face when running was my\ngain▼ But it was bad luck, after\nall...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, this is no good...)");
            }
        else {
            Voice_PlayVoice("O0205000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Sorry about your rank, but I'm lucky\nI got to see you running at a slow\npace.\nYou've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, this is no good...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
