section "o03_m3_010"{
    if (Parameter_GetPl1Param(312) != 3){
        if (Parameter_GetCh1Param(3, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0303010_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Oh, there you are.\nIf you have not decided on a\npartner, would you like to pair\ntogether?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah! Please treat me well.");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0303010_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You're taking part in the\nthree-legged race, too...\nI'm looking for a good partner, if\nit's okay, do you want to run\ntogether?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah! Sounds good.");
            Voice_PlayVoice("O0303010_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Is that so? Then, it's settled.");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("", 3, "O0303010_C00300");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝, I was looking\nfor you.\nUmm, I need to ask something.\nWould you like to p-pair up, if that\nis okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah! Please treat me well!");
            Voice_PlayVoice("O0303010_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nOkay, I will try to muster all of my\nstrength and exert myself.\nThank you for your support.");
            }
        }
    else {
        if (Parameter_GetCh1Param(3, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0303010_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Wh...Why are you here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("O0303010_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, as a participant....\nPerhaps you have not decided on a\npartner.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Voice_PlayVoice("O0303010_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Understand that my intentions are\npurely for cooperation.\nI will be your partner.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, really?");
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("O0303010_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Of course, however, try not to fall\ndown.\nYou won't be sorry I am your fellow\ntraveler.");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0303010_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... There you are!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("O0303010_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You had better find a partner soon.\nIt may be bad to pair with me.\nI'm not all that skilled...");
            Message_Who(0);
            Message_MsgDisp("主人公", "......");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("O0303010_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Huh, well, is it okay? ......\nI will prepare myself if it's okay.\nHowever, I want you to promise you\nwill pair with me.");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("O0303010_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I will be careful with my speed for\nthis!\n...\nNow listen, no matter what happens,\ndo not fall or get in my way!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, understood.\nMy best regards,\n｛Hikami＊＊｝.");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("", 3, "O0303010_C01300");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I was looking for you,\n｛主人公｝.\nI-I...\nAre you looking for a gentleman for\nthe three-legged race?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, a gentleman?");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("O0303010_C01400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes.\nI will try my best not to touch you\nas much as possible.\nIf by chance you fall...");
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("O0303010_C01500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I will be crushed.\nAt any rate, I will be prepared\nsince I am an experienced person.\nI will shut my mouth now.");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay, my best regards...");
            Character_BlinkStart(3, 0, (#1));
            Character_ChFace(0, 2, 0);
            Voice_PlayVoice("O0303010_C01600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Well then, it is settled.\nI feel very refreshed.\nNow let us aim at the goal!");
            }
        }
    Message_CloseMsg();
    Character_Chara_GS2(3, "NON");
    }
