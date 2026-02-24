section "b16_m7_043"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 6);
    Contact_SChFace(0, 4, 0);
    Voice_PlayVoice("XB_07_00_G02700", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "You are a totally different person\nin school than you are now.");
    Message_MsgSel("That's right.", "It's not like that!");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 6);
        Contact_SChFace(0, 4, 0);
        Voice_PlayVoice("XB_07_00_G02800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "As I thought.\nWhich one might be the real you?");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Contact_SChFace(0, 4, 0);
        Voice_PlayVoice("XB_07_00_G02900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This is why I'm crazy about you.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
