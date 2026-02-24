section "b16_m3_011"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 2, 0);
    Contact_SChFace(0, 3, 2);
    Voice_PlayVoice("XB_03_00_C00400", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "Are you interested in my glasses?");
    Message_MsgSel("Yeah, I am.", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 11);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_03_00_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Like you want to try wearing them?\nIt would certainly suit you well...\nAh, no, my glasses are strong, so I\ncannot allow it!");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XB_03_00_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I see.\nBy the way, my glasses are the same\nbrand as the ones the cousin that I\nrespect wears.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
