section "o03_g2_000"{
    int var0 = 0;
    Background_Bg_GS2("BG_SC421_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(11, "G2_08F", 0);
        if (Parameter_GetCh1Param(11, 130) < 3){
            Voice_PlayVoice("O0311000_K00400", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "We did it, 1st place.\nOur breathing was perfect!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(We did it!\nAll of that hard work paid off.)");
            }
        else if (Parameter_GetCh1Param(11, 130) >= 3){
            Voice_PlayVoice("O0311000_K00500", 11, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "We did it, 1st place.\nAs expected, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(We did it!\nAll of that hard work paid off.)");
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(11, 2, (#1));
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(11, "G2_08F", 0);
        if (Parameter_GetCh1Param(11, 130) < 3){
            Voice_PlayVoice("O0311000_K00600", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "We should have tried a little\nmore...\nWe were so close.\nIn the end, I think we should have\nskipped out...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(How disappointing!\nI should have tried a little\nmore...)");
            }
        else if (Parameter_GetCh1Param(11, 130) >= 3){
            Voice_PlayVoice("O0311000_K00700", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "We were so close... We did our best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(How disappointing!\nI should have tried a little\nmore...)");
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(11, 130) < 3){
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(11, "G2_08F", 0);
            Voice_PlayVoice("O0311000_K00800", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "That's enough for today.\nEven though our results was 3rd\nplace, we did our best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh?\nWell is this such a bad thing?)");
            }
        else if (Parameter_GetCh1Param(11, 130) >= 3){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(11, 3, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(11, "G2_08F", 0);
            Voice_PlayVoice("O0311000_K00900", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "That's enough for today.\nWe should have done our best.\nJust a little more...\nI'm a bit disappointed...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh?\nWell is this such a bad thing?)");
            }
        }
    else {
        if (Parameter_GetCh1Param(11, 130) < 3){
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(11, 3, (#1));
            Character_Chara_GS2(11, "G2_08F", 0);
            Voice_PlayVoice("O0311000_K01000", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Argh! We've been defeated!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, it was no use...)");
            }
        else if (Parameter_GetCh1Param(11, 130) >= 3){
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(11, 3, (#1));
            Character_Chara_GS2(11, "G2_08F", 0);
            Voice_PlayVoice("O0311000_K01100", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Argh! I don't understand!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, it was no use...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(11, 86, 1);
    }
