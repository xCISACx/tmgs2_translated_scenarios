section "o02_m3_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(3, 130) < 3){
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0203000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It was wonderful to be 1st place\nwith you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth doing our best.)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0203000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Perhaps we're good at sports?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth doing our best.)");
            }
        else {
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("", 3, "O0203000_C00200");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝,\ncongratulations.\nWhen you tore through the goal tape,\nit was as if I did also.\nI'm happy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth doing our best.)");
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(3, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0203000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "2nd place. It's higher than average.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Mmm, disappointing...\nJust a little more.)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0203000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It was disappointing.\nA little more effort.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Mmm, disappointing...\nJust a little more.)");
            }
        else {
            Character_ChFace(0, 4, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0203000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You run very fast.\nWere you struggling to be 1st place?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Mmm, disappointing...\nJust a little more.)");
            }
        }
    else if (var0 == 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_08F", 0);
        if (Parameter_GetCh1Param(3, 130) < 3){
            Voice_PlayVoice("O0203000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "3rd place.\nIt isn't acceptable but it isn't\nterrible, either.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Umm, I guess things like this are\nokay.)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("O0203000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "3rd place was what I saw when you\nran.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Umm, I guess things like this are\nokay.)");
            }
        else {
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("O0203000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Good job.\nThere is a booby prize, as well.\n3rd place is a clever result.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Umm, I guess things like this are\nokay.)");
            }
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(3, "M3_08F", 0);
        if (Parameter_GetCh1Param(3, 130) < 3){
            Voice_PlayVoice("O0203000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "4th place.\nSomeone would have to be it if four\npeople are running.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I have to work harder...)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Voice_PlayVoice("O0203000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Last place.\nLoneliness does not drift from the\nfrom the nuance of the word.\nLast place...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I have to work harder...)");
            }
        else {
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("O0203000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I appreciate the morale of going out\non a 100-meter run....\nI am not allured to the rank.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I have to work harder...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
