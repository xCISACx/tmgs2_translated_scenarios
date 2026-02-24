section "p54_m6_000"{
    if (Parameter_GetPl1Param(322) == 0){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝. How was it?");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5406000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nI thought it was a lot of eccentric\nthings thrown together.");
            Voice_PlayVoice("P5406000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The entire thing was amazingly\npleasant!\nAs expected, Senpai.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Amachi＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝. Was it good?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P5406000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... How about not at all, Senpai.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Voice_PlayVoice("P6406000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, that.\nTo put it bluntly, it sucked.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have gone to more club\nactivities and taken them more\nseriously...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝. How was it?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P5406000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nI thought it was a lot of eccentric\nthings thrown together.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5406000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The entire thing was amazingly\npleasant!\nAs expected, Senpai.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Amachi＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝. Was it good?");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P5406000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... How about not at all, Senpai.");
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("P5406000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It was too much of everything thrown\ntogether!\nA collapse during the display was\nbound to happen.");
            Voice_PlayVoice("P5406000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hane Academy students were\nscrutinized by people, I...\nAah, it's just sad!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I-I should have gone to more club\nactivities...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(6, "M6_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5406000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Waaah...!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝, how was it?");
            Voice_PlayVoice("P5406000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, did you paint this, Senpai?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. I knew it well.");
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5406000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nThe color usage here is also very\nlovely...\nI certainly think so.");
            Voice_PlayVoice("P5406000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm deeply moved by it...\nSenpai, you are amazing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Amachi＊＊｝!)");
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(6, "M6_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5406000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nHey, where were you in charge of,\nSenpai?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Here, but... Why?");
            Voice_PlayVoice("P5406000_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Why?\nYou weren't aware of what you were\ntold, Senpai?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P5406000_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I found out you're cutting corners!\nYou had better do a bit of\nself-reflecting.\nIt's outrageous.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P5406000_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "All of that hard work was spoiled\nbecause of that.\n*Sigh* What a waste.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have gone to more club\nactivities and taken them more\nseriously...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
