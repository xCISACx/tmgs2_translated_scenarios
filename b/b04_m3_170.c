section "b04_m3_170"{
    int var0 = Date_GetDateOption(2, 48);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0403170_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I cannot remain calm even though I\nam just sitting.\nShall we choose a song?");
        Message_MsgSel("Choose your best song, ｛Hikami＊＊｝.", "Let's go for the most recently added songs!", "A duet would be nice.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403170_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "......... Do I even have one...?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403170_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", ".........\nI cannot tell the artist's name from\nthe song title.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403170_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "If the both of us are singing, there\nwill not be anyone doing the\ngestures, though?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0403170_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "There are many current songs that\nare tied-up to commercials or\ndramas.\nThey are even in the song catalogue.");
        Message_MsgSel("The drama this song is in is interesting.", "It smells of a marketing strategy.", "I wonder where \"The Researchers\" is from?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403170_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I do not know the song itself, and I\nalso do not watch dramas, so I\ncannot keep up with the\nconversation.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403170_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right, it makes the consumers listen\nto the song for a fixed period of\ntime.\nIt is an efficient system.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403170_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "What!?\nThat is the song from my favorite TV\nShow, \"Science Project\".\nLet us select that song at once.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0403170_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nI have thought this for some time\nnow, but isn't this room too small?");
        Message_MsgSel("It's the same for every karaoke place.", "For some reason my heart is throbbing▼", "I estimate it to be 3 tatami mats in size.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403170_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Is that so?\nSorry, I have not been to any other\nplaces.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0403170_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Isn't it because of a lack of\noxygen!?\nI will not complain, so let us just\nleave.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403170_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh...!? W-What are you saying?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Because...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403170_C01200", 3, "B0403170_C01201");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... ｛主人公｝.\nPlease do not poke fun at me.\nM-My heart... is also throbbing.");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403170_C01300", 3, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "S-So, ｛主人公｝...");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........?");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403170_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Right, a drink.\nPlease get me a cold drink!\nWe sang too much, so our throats are\ndry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "But you didn't really sing,\n｛Hikami＊＊｝.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403170_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "No, that's...\nRight, I am talking about your\nthroat.\nYou must be thirsty.");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403170_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Are you okay with having what you\ndrank before?\nI will be ordering now.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝..?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403170_C01700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, possibly.\nWhat makes it feel smaller than it\nreally is may be due to the fact\nthat there are no windows.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
