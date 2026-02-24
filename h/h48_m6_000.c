section "h48_m6_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_15F", 0);
        Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nLet's do our best to cheer today!");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H4806000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Of course!\nToday is the day where the Baseball\nClub is on the grand stage!\nWe also have to be pumped up.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H4806000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The Cheer Squad will be over there\ncheering so we don't get in your\nway.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4806000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Kidding!\nLet's both work hard together so\nthat we win with our cheering!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        else {
            Voice_PlayVoice("", 6, "H4806000_F00300");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.\nThis is amazing!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!\nLet's do our best with our cheers!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4806000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Of course!\nToday is the day where the Baseball\nClub is on the grand stage!\nThat means we are on the grand\nstage, too!");
            Voice_PlayVoice("H4806000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Everyone surely thinks that this\nmatch is entirely about Baseball,\nbut our cheering is also important!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4806000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm also going to be doing my best,\nso you should also show us...\nnot stuffing up, but your cool side!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4806000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Let's show the Baseball Club, and\nthe entire nation our good side!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_15F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nLet's do our best to cheer today!");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4806000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Of course!\nIsn't it the Track and Field Club's\ngrand stage?\nLet's go at it with all our might!");
            Voice_PlayVoice("H4806000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "No one cares about the cheerleaders,\nso go over there and cheer without\ngetting in the Cheer Squad's way.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4806000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Just kidding!\nLet's both work together to show\neveryone the most awesome cheering!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        else {
            Voice_PlayVoice("", 6, "H4806000_F01100");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.\nIt's amazing, we're at the Inter\nHigh School Championships!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nLet's do our best to cheer today!");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4806000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Of course!\nToday is the day where the Track and\nField Club is on the grand stage, so\nwe are too!!");
            Voice_PlayVoice("H4806000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "We don't have a cheerleading\nchampionship, so let's go at it with\nall our strength today!");
            Character_ChFace(0, 2, 1);
            Voice_PlayVoice("H4806000_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm also going to be doing my best,\nso you should also show us...\nnot stuffing up, but your cool side!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4806000_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Let's do the most awesome cheer so\nthat the other team will be jealous\nof it!!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
