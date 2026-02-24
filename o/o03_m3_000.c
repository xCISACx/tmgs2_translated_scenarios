section "o03_m3_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(3, 130) < 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0303000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "1st place... It sounds wonderful!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best.)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_BlinkStart(3, 2, (#1));
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0303000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "We did it, we're first!\nThe moment we tore through the goal\ntape with our chests, I felt good.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best.)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0303000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "We've reached one of the goals of\nthe Sports Festival...!\nA thanks is in order for this dream.\nYou... It's thanks to you!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best.)");
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(3, "M3_08F", 0);
        if (Parameter_GetCh1Param(3, 130) < 3){
            Voice_PlayVoice("O0303000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You seem to be disappointed.\nI am not.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, just a little more...)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Voice_PlayVoice("O0303000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "2nd place is also nice.\nI'm quite glad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, just a little more...)");
            }
        else {
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("O0303000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Thanks to you, we were a moment away\nfrom our dream of being first place.\nThank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, just a little more...)");
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(3, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0303000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "3rd place... It's so-so.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Umm, I guess things like this are\nokay.)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0303000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "If we added both of our powers\ninstead of dividing them, I could\nunderstand this rank.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Umm, I guess things like this are\nokay.)");
            }
        else {
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0303000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You tried your best and so did I.\n3rd place isn't that bad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Umm, I guess things like this are\nokay.)");
            }
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(3, "M3_08F", 0);
        if (Parameter_GetCh1Param(3, 130) < 3){
            Voice_PlayVoice("O0303000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "As expected, we stand at last place.\nI might have made a mistake in who I\npartnered with.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried more harder...)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Voice_PlayVoice("O0303000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The results may have been different\nif your reflexes were a little\nbetter.\nAh... I should leave.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried more harder...)");
            }
        else {
            Voice_PlayVoice("O0303000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "There was enough power being\ncompensated for with us being\npartners with each other....\nHowever, we finished last.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried more harder...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
