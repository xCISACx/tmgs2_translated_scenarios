section "h4a_m3_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetBkParam(4, 52) >= 320){
            if (Parameter_GetCh1Param(3, 130) >= 4){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(3, "M3_01F", 0);
                Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A03000_C00200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The Baseball Club is amazing!\nThey're the top high school baseball\nteam.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!\nThe players really tried their\nhardest!");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("H4A03000_C00300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Perhaps the most surprised ones are\nthe players themselves.\nSome of them are crying.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, maybe.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A03000_C00400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nThe fact that they were giving their\nall at this level was because of\nyour cheering.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A03000_C00500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "At least... that's what I think....\nYou've worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad I joined the\nCheerleading Club...\nBest day ever!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(3, 130) >= 4){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Character_Chara_GS2(3, "M3_01F", 0);
                Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A03000_C00800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... That was unfortunate.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... It was.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A03000_C00900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "They were close, but the players did\ntheir best.\nThey didn't give up until the very\nend.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A03000_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Your...\ncheering was surely heard by the\nplayers.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
                Character_ChFace(0, 0, 6);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A03000_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Not just to the players too, we also\ncontinued cheering when we heard you\ncheer.\nIt was thanks to you... to you guys.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, I did my best cheering...\nI wonder if it gave everyone\npower...)");
                }
            }
        }
    else {
        if (Parameter_GetBkParam(4, 52) >= 320){
            if (Parameter_GetCh1Param(3, 130) >= 4){
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(3, "M3_01F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A03000_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The Track and Field Club are\namazing!\nDoes this mean that they are the\nchampions?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, they are!");
                Character_ChFace(0, 0, 6);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("H4A03000_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "So they had this much power.\nI'm surprised....");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A03000_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Isn't it because of you-- I mean you\nguys?\nYour cheering helped them bring in\nthe win.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, I wonder.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A03000_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I'm sure it was.\nIt was a very nice, powerful cheer.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Thanks, ｛Hikami＊＊｝!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad I joined the\nCheerleading Club...\nThis is the best day!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(3, 130) >= 4){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Character_Chara_GS2(3, "M3_01F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A03000_C02000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... It was close.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A03000_C02100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The players did their best.\nThey were close, but they didn't\ngive up until the very end.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A03000_C02200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Your cheering...\nmust have reached them on the field.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
                Character_ChFace(0, 0, 6);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A03000_C02300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "And it reached us too.\nWhat made us continue cheering was\nyour cheering-- I mean the\nCheerleading Club's cheering.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, I did my best cheering...\nI wonder if it gave everyone\npower...)");
                }
            }
        }
    Parameter_AddCh1Param(3, 86, 1);
    }
