section "b16_m7_024"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 10);
    Contact_SChFace(0, 4, 0);
    Voice_PlayVoice("XC_07_00_G01600", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Well now, you wanted to kiss\nSensei's cheek.\nIs that right?");
    Message_MsgSel("Yes!", "No?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 9);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_07_00_G01700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Huh...\nI especially want to hear it from\nyou.\nPlease.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Contact_SChFace(0, 4, 0);
        Voice_PlayVoice("XC_07_00_G01800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Somewhere different? Really?");
        break ;
        }
    Music_StopBGM(0, 40);
    }
