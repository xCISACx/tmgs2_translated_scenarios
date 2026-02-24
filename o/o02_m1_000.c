section "o02_m1_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(1, "M1_08F", 0);
        if (Parameter_GetCh1Param(1, 130) < 3){
            Voice_PlayVoice("O0201000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "1st place.\nIt seems you're the type with fast\nlegs.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth doing my best.)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Voice_PlayVoice("O0201000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "1st place!\nYou must be in nice shape.\nOr maybe you just have fast feet?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth doing my best.)");
            }
        else {
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("O0201000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey, it's 1st place!\nYou were awesome! How did you do it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth doing my best.)");
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(1, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0201000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "2nd place. Heh...\nYou were relatively quick.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(How disappointing.\nI was so close...)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0201000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "2nd place.\nYou sprinted a little too late at\nthe end of the race.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(How disappointing.\nI was so close...)");
            }
        else {
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 4);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0201000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Aah! So close! 2nd place...\nWell, it's okay! You did your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(How disappointing.\nI was so close...)");
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(1, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0201000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "That's normal.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe these kind of things are\nokay...)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0201000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "So, what can I say to you...\nAt any rate, run more!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe these kind of things are\nokay...)");
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0201000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "3rd place...\nAh, well, it isn't last place.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe these kind of things are\nokay...)");
            }
        }
    else {
        if (Parameter_GetCh1Param(1, 130) < 3){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0201000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Too slow.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried a little\nharder...)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0201000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Pah!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried a little\nharder...)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0201000_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Look, well... It can't be helped.\nYou're not suited for this. Okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried a little\nharder...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
