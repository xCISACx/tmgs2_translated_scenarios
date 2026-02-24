section "h4a_m4_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetBkParam(4, 52) >= 320){
            if (Parameter_GetCh1Param(4, 130) >= 4){
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Character_Chara_GS2(4, "M4_01F", 0);
                Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A04000_D00100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "The Baseball Club won the\nchampionships...\nAmazing!");
                Message_Who(0);
                Message_MsgDisp("主人公", "I still can't believe it...\nIt's because the players did their\nbest!");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("H4A04000_D00200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nIf they scored more home-runs,\nthey'd see your smile.\nThat's probably why they did their\nbest.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A04000_D00300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Anyway! Awesome, they're Japan's #1!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad I joined the\nCheerleading Club...\nThis is the best day!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(4, 130) >= 4){
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(4, "M4_01F", 0);
                Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A04000_D00700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... They lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah.");
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("H4A04000_D00800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I feel this vexed already, so those\nguys probably feel even worse.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4A04000_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "What the hell are you doing not\nmotivating them?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("H4A04000_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "This isn't the time or place to be\ngloomy!\nGo and tell those guys that they've\nworked hard!");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A04000_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I'll listen to you complain and\nstuff later.\nSo go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hariya＊＊｝... Thanks.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Although they lost, I did my very\nbest as a part of the Cheerleading\nClub...)");
                }
            }
        }
    else {
        if (Parameter_GetBkParam(4, 52) >= 320){
            if (Parameter_GetCh1Param(4, 130) >= 4){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(4, "M4_01F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A04000_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Amazing!\nThey won the championships...!\nThey're #1 in Japan!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Amazing... I'm so happy!\nThey all put their power together\nand did their best!");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("H4A04000_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "With Japan's #1 Cheerleading Club,\nit's no surprise that they won.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A04000_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nI'm saying that you did your best\ntoo!\nAwesome, they're Japan's #1!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad I joined the\nCheerleading Club...\nThis is the best day!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(4, 130) >= 4){
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(4, "M4_01F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A04000_D01800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It was close.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A04000_D01900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Speak, and move that body!\nIt was a good cheer, so be\nconfident.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hariya＊＊｝...");
                Character_BlinkStart(4, 0, (#1));
                Voice_PlayVoice("H4A04000_D02000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Look, they're calling you.\nSmile for them since it's the end!");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Okay, I'm going!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I did my very best as a part of the\nCheerleading Club.\nI should be confident.)");
                }
            }
        }
    Parameter_AddCh1Param(4, 86, 1);
    }
