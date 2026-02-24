section "h4a_m8_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetBkParam(4, 52) >= 320){
            if (Parameter_GetCh1Param(8, 130) >= 4){
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Character_Chara_GS2(8, "M8_??F", 0);
                Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A08000_H00300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Are you serious...\nAmazing, Hanegasaki Academy is the\nnational champion!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes!\nBecause everyone in the Baseball\nClub did their best...!");
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("H4A08000_H00400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Wrong!\nNot just the Baseball Club, but us\ntoo, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(8, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4A08000_H00500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Not just the players, but the\nCheerleading Club, too...\nEveryone from Hanegasaki did their\nbest.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A08000_H00600", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "So be more proud!");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Masaki＊＊｝... Okay!");
                Character_BlinkStart(8, 3, (#1));
                Voice_PlayVoice("H4A08000_H00700", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "That smile probably won the match.\nYeah, it's amazing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad I joined the\nCheerleading Club...\nThis is the best day!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(8, 130) >= 4){
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(8, "M8_??F", 0);
                Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("", 8, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝...\nSorry, even though you came to\nwatch, they lost...");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H4A08000_H01200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... I'm fine.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_BlinkStart(8, 3, (#1));
                Voice_PlayVoice("H4A08000_H01300", 8, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Anyway, ｛主人公｝.");
                Character_BlinkStart(8, 0, (#1));
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4A08000_H01400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I'm sure that your feelings were\nconveyed to people on the ground, as\nyou never gave up cheering until the\nend.");
                Character_BlinkStart(8, 2, (#1));
                Voice_PlayVoice("H4A08000_H01500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "So don't be so down.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A08000_H01600", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "There might be guys who did their\nbest because they wanted to see you\nsmile.\nSo smile for them now, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Okay!");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4A08000_H01700", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Yeah, amazing.\nYou get full marks.\nRest up today, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Even though they lost, I did my\nvery best as a part of the\nCheerleading Club...)");
                }
            }
        }
    else if (Parameter_GetCh1Param(2, 25) == 0){
        if (Parameter_GetBkParam(4, 52) >= 320){
            if (Parameter_GetCh1Param(8, 130) >= 4){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(8, "M8_??F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A08000_H02000", 8, "H4A08000_H02001");
                Message_Who(8);
                Message_MsgDisp("Masaki", "They did it, ｛主人公｝!\nThey won the championships!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes! I'm so happy!");
                Character_BlinkStart(8, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A08000_H02100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "The game, the moment they won, and\nyour cheering!\nI'm so moved by it all...\nThis is youth...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Geez, ｛Masaki＊＊｝...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(8, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4A08000_H02200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Above all...\nI am happy that you're happy.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4A08000_H02300", 8, "H4A08000_H02301");
                Message_Who(8);
                Message_MsgDisp("Masaki", "That was good,\n｛主人公｝.\nCongrats.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you very much!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad I joined the\nCheerleading Club...\nThis is the best day!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(8, 130) >= 4){
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(8, "M8_??F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A08000_H03000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Ah～... They lost...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes...");
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4A08000_H03100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Well, actually...\nI think it's not about your\ncheering, those guys in the Track\nand Field Club weren't strong\nenough.");
                Character_BlinkStart(8, 3, (#1));
                Voice_PlayVoice("H4A08000_H03200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "So don't get so down....\nEven though I say that, you're not\nlistening...");
                Message_Who(0);
                Message_MsgDisp("主人公", "......");
                Character_BlinkStart(8, 0, (#1));
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H4A08000_H03300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "...\nI'll tell you a way to get rid of\nthe pain and bitterness.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A08000_H03400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "In a loud voice, say to them,\n\"You've worked hard\".\nIt'll make you feel quite refreshed.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4A08000_H03500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Look, they're coming back.\nSay it so that you can smile again\ntomorrow!");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Okay!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(The Cheerleading Club did our very\nbest cheering.\nIt's fine to be confident.)");
                }
            }
        }
    Parameter_AddCh1Param(8, 86, 1);
    }
