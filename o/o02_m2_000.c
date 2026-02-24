section "o02_m2_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(2, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0202000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "1st place? Huh...\nSurprisingly, you're good.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best.)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0202000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "1st place. Must mean a lot.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best.)");
            }
        else {
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0202000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You got 1st place. I'm glad.\nMust be worn out.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It was good to do my best!)");
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(2, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0202000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You're 2nd place. Huh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I need to try a little harder...)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0202000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That was disappointing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I am really disappointed!\nOnly a little more.)");
            }
        else {
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0202000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Good? 2nd place.... You were close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, I'm disappointed...\nOnly a little more.)");
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(2, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0202000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nYou look like you'd get that rank.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have tried harder...)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0202000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "3rd place. What a questionable rank.\nGood job.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I need to try harder.)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0202000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That appears to be your limit...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I need to try harder...)");
            }
        }
    else {
        if (Parameter_GetCh1Param(2, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0202000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well, running doesn't seem natural\nfor you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I'm miserable...)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0202000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well, isn't it good that you made it\nall the way to the end?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I'm miserable...)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0202000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I understand that you ran your\nbest....\nDon't worry about it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I'm miserable...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
