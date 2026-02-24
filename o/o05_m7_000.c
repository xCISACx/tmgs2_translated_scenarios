section "o05_m7_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_08F", 0);
        Voice_PlayVoice("", 7, "Y0507000_G00100");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝, you did it!\nYou did wonderful borrowing.");
        }
    else if (var0 <= 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_08F", 0);
        Voice_PlayVoice("", 7, "Y0507000_G00200");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝, the questions\nwere difficult.\nHowever, good job.");
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(7, "M7_08F", 0);
        Voice_PlayVoice("Y0507000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "W-Well, being good at borrowing\nthings, is just kind of weird!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
