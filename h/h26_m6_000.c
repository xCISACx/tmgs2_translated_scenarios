section "h26_m6_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(6, "M6_15F", 0);
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Voice_PlayVoice("H2606000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Awesome! You won!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, we won!");
            Voice_PlayVoice("H2606000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You did quite well, Senpai!\nI'm seeing you in a new light!\nIt was worth cheering for you!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!)");
            }
        else {
            Voice_PlayVoice("H2606000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You won! Congrats!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!");
            Character_ChFace(0, 2, 1);
            Voice_PlayVoice("H3606000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, it was all thanks to me\ncheering more than usual.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, maybe.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H2606000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "G-Geez... It was a joke.\nBut it was great. Congrats!!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I'm glad I did my best!)");
            }
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(6, "M6_15F", 0);
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Voice_PlayVoice("H2606000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You worked hard.... But you lost.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.... Sorry.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H2606000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "But... it was close.\nYou did well too, Senpai....\nMaybe we didn't cheer enough.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That was unfortunate...)");
            }
        else {
            Voice_PlayVoice("H2606000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... It was close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H2606000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "But you were really cool, Senpai!\nI'm not lying. It's true!");
            Voice_PlayVoice("H2606000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I swear it.\nThere's no mistaking it, because I\nwas watching you as I was cheering!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H2606000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Uhh...\nSorry for the lack of cheering....\nYou worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, I should have tried a little\nharder.)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
