section "o03_g4_000"{
    int var0 = 0;
    Background_Bg_GS2("BG_SC421_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(13, 130) < 3){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 3, (#1));
            Character_Chara_GS2(13, "G4_08F", 0);
            Voice_PlayVoice("O0313000_M00200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "1st place blue ribbon～!!\nDid our breathing match together?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(We did it!\nAll of that hard work paid off.)");
            }
        else if (Parameter_GetCh1Param(13, 130) >= 3){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(13, "G4_08F", 0);
            Voice_PlayVoice("O0313000_M00300", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Eek! 1st place blue ribbon～!!\nOur breathing was exactly right!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(We did it!\nAll of that hard work paid off.)");
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(13, "G4_08F", 0);
        if (Parameter_GetCh1Param(13, 130) < 3){
            Voice_PlayVoice("O0313000_M00400", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Aaah, ugh! 2nd place...\nBut we did our best, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm a little disappointed.)");
            }
        else if (Parameter_GetCh1Param(13, 130) >= 3){
            Voice_PlayVoice("O0313000_M00500", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Aaah! Ugh, how regrettable!\n2nd place...\nBut are modest girls really the best\nfor this?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm a little disappointed.)");
            }
        }
    else if (var0 == 3){
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(13, "G4_08F", 0);
        if (Parameter_GetCh1Param(13, 130) < 3){
            Voice_PlayVoice("O0313000_M00600", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Hmm～, 3rd place... I'm disappointed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*...\nWell, these kind of things happen.)");
            }
        else if (Parameter_GetCh1Param(13, 130) >= 3){
            Voice_PlayVoice("O0313000_M00700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Aah～, 3rd place...\nAre you a little annoyed, as well?\nI am disappointed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*...\nWell, these kind of things happen.)");
            }
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(13, 2, (#1));
        Character_Chara_GS2(13, "G4_08F", 0);
        if (Parameter_GetCh1Param(13, 130) < 3){
            Voice_PlayVoice("O0313000_M00800", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... 4th place. I feel a bit awkward.\nI'm sorry, I feel as if I was\nuseless.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, it was no use...)");
            }
        else if (Parameter_GetCh1Param(13, 130) >= 3){
            Voice_PlayVoice("O0313000_M00900", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... 4th place.\nI guess I pulled on your foot?\nI'm sorry～!!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, it was no use...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(13, 86, 1);
    }
