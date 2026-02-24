section "o03_g1_000"{
    int var0 = 0;
    Background_Bg_GS2("BG_SC421_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(10, 130) < 3){
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(10, "G1_08F", 0);
            Voice_PlayVoice("O0310000_J00400", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "1st place...\nThe top feels pretty good.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(We did it!\nAll of that hard work paid off.)");
            }
        else if (Parameter_GetCh1Param(10, 130) >= 3){
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(10, "G1_08F", 0);
            Voice_PlayVoice("O0310000_J00500", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "1st place... It's a natural result.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(We did it!\nAll of that hard work paid off.)");
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(10, 130) < 3){
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(10, "G1_08F", 0);
            Voice_PlayVoice("O0310000_J00600", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "2nd place...\nIt's an unexpected, regrettable\nthing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(How disappointing...\nI should have tried a little\nharder.)");
            }
        else if (Parameter_GetCh1Param(10, 130) >= 3){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(10, "G1_08F", 0);
            Voice_PlayVoice("O0310000_J00700", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "2nd place... It's not that bad.\nI'm annoyed, though...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It's really regrettable!\nI should have tried a little\nharder.)");
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(10, 130) < 3){
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(10, 3, (#1));
            Character_Chara_GS2(10, "G1_08F", 0);
            Voice_PlayVoice("O0310000_J00800", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Oh, I grow weary of like this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh?\nWell is this really such a bad\nthing?)");
            }
        else if (Parameter_GetCh1Param(10, 130) >= 3){
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(10, 3, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(10, "G1_08F", 0);
            Voice_PlayVoice("O0310000_J00900", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "3rd place is noncommittal.\nI can't accept that, no matter what.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh?\nWell is this really such a bad\nthing?)");
            }
        }
    else {
        if (Parameter_GetCh1Param(10, 130) < 3){
            Character_ChFace(0, 0, 8);
            Character_Chara_GS2(10, "G1_08F", 0);
            Voice_PlayVoice("O0310000_J01000", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You... Your foot is too slow.\nGet a steady grip.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, it was no use.)");
            }
        else if (Parameter_GetCh1Param(10, 130) >= 3){
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(10, 3, (#1));
            Character_Chara_GS2(10, "G1_08F", 0);
            Voice_PlayVoice("O0310000_J01100", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Last place... Huh, I'm ashamed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, it was no use.)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(10, 86, 1);
    }
