section "p74_m3_000"{
    Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good, I managed to be a success...)");
            Voice_PlayVoice("P8403000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Good job.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P8403000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The personalities suited the\nclothing fairly well.\nIt was unexpectedly like something\ncalled a \"fashion show\", too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Hikami＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Aaah, I fell down. Big mistake...)");
            Voice_PlayVoice("P8403000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Good job.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P8403000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... You fell down loudly.\nIn a way, it would seem like a\nproduction you would do.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugggh...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good, I managed to be a success...)");
            Voice_PlayVoice("P8403000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Goob job.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P8403000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Although I did not notice a little\nwhile ago on stage, your dress is\nvery pretty.\nWere you pondering the area when you\nmade it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Hikami＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Aaah, I fell down. Big mistake...)");
            Voice_PlayVoice("P8403000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It's alright.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝...");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("P8403000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "As soon as you appeared you looked\nlovely...\nIt didn't last very long.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugggh, pathetic...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good, I managed to be a success...)");
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(3, "M3_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝!");
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("P8403000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "W-When you came out, there was a big\nrising shout of joy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? Oh really?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P8403000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, really. How should I put it...\nI saw the audience as my enemy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh...?");
            Character_BlinkStart(3, 0, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P8403000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "No, it's okay, it was because they\nrecognized your dress....\nI evaluated you, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was praised a lot by\n｛Hikami＊＊｝...\nI did my best and things turned out\nwell!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Aaah, I fell down. Big mistake...)");
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝...");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("P8403000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Are you alright?\nI thought such arrangements were\nvery admirable.");
            Message_Who(0);
            Message_MsgDisp("主人公", "S-Such as...");
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("P8403000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThere is no way that you would do\nsomething to destroy an important\npiece.\nThat is why I was worried.\nAre you hurt?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I'm kind of calm...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P8403000_C01300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Is that so?\nIn that case, it was nice....\nWell, you should not worry about it\nso much.\nIt wasn't a wedding ceremony.");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(3, 3, (#1));
            Voice_PlayVoice("P8403000_C01400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Besides, at that moment...\nIf a guy was next to you to help,\nbefore you fell...");
            Message_Who(0);
            Message_MsgDisp("主人公", "...?");
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8403000_C01500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "N-No, it's nothing. Now, cheer up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Hikami＊＊｝ came to\ncomfort me.\nThank you...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
