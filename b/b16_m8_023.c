section "b16_m8_023"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(1, 0, 2);
    Contact_SChFace(1, 0, (#1));
    Contact_SChFace(1, 4, 1);
    Contact_SChFace(1, 4, 1);
    Voice_PlayVoice("XB_08_00_H01700", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Don't tease me like that when I'm\ndriving.");
    Message_MsgSel("Okay.", "Eh～...");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(1, 0, 3);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XB_08_00_H01800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Apart from when I'm in the car, it's\nfine.\nI like it when you mess with me.");
        break ;
        case 1:
        Contact_SChFace(1, 2, 2);
        Contact_SChFace(1, 3, 3);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XB_08_00_H01900", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Ah...\nI don't hate it, but it's dangerous.\nRight?");
        break ;
        }
    Music_StopBGM(0, 40);
    }
