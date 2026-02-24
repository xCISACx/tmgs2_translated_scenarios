section "h4a_m2_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetBkParam(4, 52) >= 320){
            if (Parameter_GetCh1Param(2, 130) >= 4){
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(2, "M2_15F", 0);
                Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝,\ncongratulations on winning the\nchampionship!");
                Voice_PlayVoice("H4A02000_B00500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Thanks.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A02000_B00600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Hey. Did you at one point...\ncall out my name?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4A02000_B00700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I felt like I heard you saying it.\nAnd I feel like it gave me power.");
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("", 2, "H4A02000_B00800");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Thanks, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I joined the Cheerleading\nClub...\nThis is the best day!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(2, 130) >= 4){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm, ｛Shiba＊＊｝...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4A02000_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Sorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("H4A02000_B01900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I had actually planned to win your\nsmile by going at it with my\nabilities.");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4A02000_B02000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Not having enough abilities and not\nbeing able to win your smile is\nactually...\nvexing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
                Message_Who(0);
                Message_MsgDisp("主人公", "But I know that you, and everyone\nelse did their best,\n｛Shiba＊＊｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You've worked hard,\n｛Shiba＊＊｝.\nThanks for showing me a good match!");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("", 2, "H4A02000_B02100");
                Message_Who(2);
                Message_MsgDisp("Shiba", "｛主人公｝... Thanks.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Although they didn't win, it really\nwas a good game.\nI'm glad I joined the Cheerleading\nClub!)");
                }
            }
        }
    else {
        if (Parameter_GetBkParam(4, 52) >= 320){
            if (Parameter_GetCh1Param(2, 130) >= 4){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_01F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A02000_B02400", 2, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You did it, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I'm really happy!\nEveryone in the Track and Field Club\nlooks radiant...!");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A02000_B02500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... You too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A02000_B02600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I'm actually jealous.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4A02000_B02700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You did well. You've worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I...\nam glad that I joined the\nCheerleading Club!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(2, 130) >= 4){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_01F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "They lost...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4A02000_B03000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You did your best.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...\nI don't think that the players\nregret it either.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A02000_B03100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Because of you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("H4A02000_B03200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You didn't give up until the very\nend...\nI'm sure the players saw that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4A02000_B03300", 2, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Your cheering was good.\nYou've worked hard,\n｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Thanks.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Although they lost...\nI'm glad that I joined the\nCheerleading Club...)");
                }
            }
        }
    Parameter_AddCh1Param(2, 86, 1);
    }
