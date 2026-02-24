section "h4a_m5_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetBkParam(4, 52) >= 320){
            if (Parameter_GetCh1Param(5, 130) >= 4){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(5, "M5_01F", 0);
                Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "They won!\nThey won, ｛Chris＊＊｝!");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A05000_E00200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "There were lots of cute girls like\nyou cheering as well.");
                Voice_PlayVoice("H4A05000_E00300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "They couldn't lose, having those\ngirls cheering for them～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "So it was like pressure?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4A05000_E00400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nEven I would want those cute, upward\nlooking eyes pressuring me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Voice_PlayVoice("H4A05000_E00500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Hmm～?\nThe way your cheered was also\namazing.");
                Voice_PlayVoice("H4A05000_E00600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You really worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. Thanks, ｛Chris＊＊｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad I joined the\nCheerleading Club...\nThis is the best day!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(5, 130) >= 4){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(5, "M5_01F", 0);
                Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A05000_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... They lost...");
                Message_Who(0);
                Message_MsgDisp("主人公", "......");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H4A05000_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Ah!\nThis is no good and a waste, too!");
                Message_Who(0);
                Message_MsgDisp("主人公", "W-What is?");
                Voice_PlayVoice("H4A05000_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Tears should be cried during times\nwhen you are glad, and in front of\npeople important to you.");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A05000_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "And isn't it a cheerleader's duty to\nmotivate the sad players?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah, it is.");
                Voice_PlayVoice("H4A05000_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nAlthough my real intention was to\nsay that I only want you to cry in\nfront of me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A05000_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Your smile is the best.\nGo and see the players.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah!\nThanks, ｛Chris＊＊｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I did my very best cheering, so\nthere are no regrets.\nI'm glad I joined the Cheerleading\nClub.)");
                }
            }
        }
    else {
        if (Parameter_GetBkParam(4, 52) >= 320){
            if (Parameter_GetCh1Param(5, 130) >= 4){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A05000_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "The Track and Field Club are\namazing.\nThey're the champions.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah! I'm so happy!!");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4A05000_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... You are really happily elated.");
                Voice_PlayVoice("H4A05000_E01800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm happy, too.\nYour smile is like magic.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You're p-praising me too much,\n｛Chris＊＊｝...");
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A05000_E01900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But it's something you yourself\ndon't notice.\nAh, the players have returned.\nGo and greet them.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad I joined the\nCheerleading Club...\nThis is the best day!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(5, 130) >= 4){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(5, "M5_01F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "They lost...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A05000_E02200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nLet's applaud the players who didn't\ngive up until the very end!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...");
                SoundEffect_PlayStream(2, "SS_T_00_212_S00");
                System_Wait(#300);
                Voice_PlayVoice("H4A05000_E02300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nLet's applaud the Cheerleading Club,\nwho didn't give up until the very\nend!");
                SoundEffect_StopStream(2, 40);
                SoundEffect_PlayStream(2, "SS_T_00_213_S00");
                System_Wait(#300);
                Character_BlinkStart(5, 0, (#1));
                Voice_PlayVoice("H4A05000_E02400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Finally, let's applaud everyone who\nis here!\nYou did well!");
                SoundEffect_StopStream(2, 40);
                SoundEffect_PlayStream(2, "SS_T_00_214_S00");
                System_Wait(#300);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝...");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("H4A05000_E02500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... And this is for you.\nYou've worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Thanks...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(They lost...\nBut I am glad I joined the\nCheerleading Club...)");
                SoundEffect_StopStream(2, 40);
                }
            }
        }
    Parameter_AddCh1Param(5, 86, 1);
    }
