section "h36_m6_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(6, "M6_15F", 0);
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Voice_PlayVoice("H3606000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, you did it! You came first!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3606000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You did quite well, Senpai!\nI'm seeing you in a new light!! ...\nAh, was it because I was cheering\nfor you?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I won!)");
            }
        else {
            Voice_PlayVoice("H3606000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, you did it!\nWhen I was cheering, my heart was\nracing!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks.");
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("H3606000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, it was all thanks to me\ncheering more than usual.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, maybe.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H3606000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "G-Geez... It was a joke.\nBut it's great. Congrats!!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I'm glad I did my best!)");
            }
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(6, "M6_15F", 0);
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Voice_PlayVoice("H3606000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You lost.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.... Sorry.");
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3606000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, don't worry about it.\nTo me, it was good...\nfor practicing my cheering.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("H3606000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "But I did want to see you come\nfirst.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That's was unfortunate...)");
            }
        else {
            Voice_PlayVoice("H3606000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Uhh... You were close. Sorry.\nWas the cheering not enough?");
            Message_Who(0);
            Message_MsgDisp("主人公", "That's not it. But...\nsorry I didn't win.");
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3606000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Don't apologize! It's not over.\nShouldn't you just try harder next\ntime?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("H3606000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "And show me something good!\nI will be cheering for you as well!\nYou've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, that was unfortunate!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
