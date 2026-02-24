section "o03_m2_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(2, 130) < 3){
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0302000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nIt's a miracle you got 1st place in\nrunning.\nI was surprised.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth doing my best.)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0302000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You did it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I want to let out a nice yell.)");
            }
        else {
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0302000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You did it.\nI'm glad to get 1st place with you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did my best!)");
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(2, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0302000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Well, 2nd place in running.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh... How disappointing.\nJust a little more...)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0302000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Fell a little behind.\nI'm disappointed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... Just a little more.)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0302000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... That was disappointing.\nYou and I could have taken 1st\nplace.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm... I'm disappointed!)");
            }
        }
    else if (var0 == 3){
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 2);
        Character_Chara_GS2(2, "M2_08F", 0);
        if (Parameter_GetCh1Param(2, 130) < 3){
            Voice_PlayVoice("O0302000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No good at all.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried harder...)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Voice_PlayVoice("O0302000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Being at the bottom isn't good.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried harder...)");
            }
        else {
            Voice_PlayVoice("O0302000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I guess you gave up at the last\nminute....\nThat's unusual of you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried harder...)");
            }
        }
    else {
        if (Parameter_GetCh1Param(2, 130) < 3){
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0302000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You were worn out......");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have tried harder...)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0302000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's not because you cut corners,\nright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... Pathetic...)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0302000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You did your best to race.\nSo, it's not that bad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... Pathetic...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
