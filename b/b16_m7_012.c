section "b16_m7_012"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Voice_PlayVoice("XB_07_00_G00600", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "A mischievous child.\nAren't you worried about being lazy\nat all?");
    Message_MsgSel("Yes!", "No?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 0);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_07_00_G00700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Well, there is a cure.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 9);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_07_00_G00800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "No self-consciousness.\nIt's an embarrassing thing.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
