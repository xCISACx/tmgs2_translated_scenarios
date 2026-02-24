section "u03_g4_000"{
    Character_ChFace(0, 2, 0);
    Character_BlinkStart(13, 2, (#1));
    Character_ChFace(0, 3, 3);
    Character_ChFace(0, 4, 0);
    if (Parameter_GetCh1Param(13, 64) == 0){
        Voice_PlayVoice("", #1, "U0313000_M00000");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "｛主人公｝, here, take\nthis.");
        Message_Who(0);
        Message_MsgDisp("主人公", "A glass bottle?");
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("U0313000_M00100", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Yeah, it's actually perfume.\nI always buy it whenever I come\nhere.\nThey say it gives a relaxing effect.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Character_BlinkStart(13, 0, (#1));
        Voice_PlayVoice("U0313000_M00200", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "It's a thank you for accompanying me\ntoday.\nSo I thought, how about it?");
        Message_MsgSel("Accept Dream Fragrance.", "Do not accept Dream Fragrance.");
        switch (Message_TextSelect()){
            case 0:
            Message_Who(0);
            Message_MsgDisp("主人公", "Wow, it has a nice smell.\nYou also use this,\n｛Mizushima＊＊｝?");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("U0313000_M00300", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Yeah. Haha, a match, right?");
            SoundEffect_PlayStream(3, "SS_T_00_160_M00");
            Message_Who(0);
            Message_MsgDisp("　　　", "(Received \"Dream Fragrance\"!)");
            SoundEffect_StopStream(3, 40);
            SoundEffect_PlayStream(2, "SS_DSE_191_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It feels like my mind has\nexpanded...)");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 2, (#1));
            Voice_PlayVoice("U0313000_M00400", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Let's eat delicious food together\nagain, okay?\nSee you then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nSee you then, ｛Mizushima＊＊｝.");
            Parameter_AddPl1Param(17, 5);
            Parameter_AddPl1Param(20, 5);
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "Hmm, I'm a little...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("U0313000_M00500", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "I see...\nYeah, we do have our own tastes of\nfragrances.\nDon't force yourself.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 2, (#1));
            Voice_PlayVoice("U0313000_M00600", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Let's eat delicious food together\nagain, okay?\nSee you then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nSee you then, ｛Mizushima＊＊｝.");
            Parameter_AddCh1Param(13, 60, #3);
            break ;
            }
        }
    else {
        Voice_PlayVoice("", #1, "U0313000_M00700");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "｛主人公｝, here, take\nthis.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Wow, it's a beautiful box....\nOh, a music box?");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(13, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("U0313000_M00800", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "A beautiful sound, right?\nNot just that, but it has a\nbeautiful melody...\nI thought about giving it to you as\na thanks for today.");
        Message_MsgSel("Accept the Light Music Box.", "Don't accept the Light Music Box.");
        switch (Message_TextSelect()){
            case 0:
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you.\nBut, is it okay to accept it?");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(13, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("U0313000_M00900", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Haha, to be honest?\nI have another one, but the melody\nis different.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("U0313000_M01000", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "That's why it would be great if you\naccepted it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you, ｛Mizushima＊＊｝!");
            SoundEffect_PlayStream(3, "SS_T_00_160_M00");
            Message_Who(0);
            Message_MsgDisp("　　　", "(Received \"Light Music Box\"!)");
            SoundEffect_StopStream(3, 40);
            SoundEffect_PlayStream(2, "SS_DSE_191_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It feels like my mind has\nbroadened...)");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 2, (#1));
            Voice_PlayVoice("U0313000_M01100", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Let's eat parfait again together\nnext time, okay?\nSee you then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nSee you then, ｛Mizushima＊＊｝.");
            Parameter_AddPl1Param(17, 10);
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "I can't accept this kind of\nexpensive item.");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("U0313000_M01200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "It's not just that, however...\nYeah, maybe taking care of it would\nbe rather annoying.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I'm sorry.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(13, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("U0313000_M01300", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "No, it's fine.\nLet's find new shops again next\ntime, okay?\nSee you then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!\nSee you then, ｛Mizushima＊＊｝.");
            Parameter_AddCh1Param(13, 60, #3);
            break ;
            }
        }
    if (Parameter_ChkPlayer(5)){
        System_Call_GS2("K02", "G4", 11);
        }
    Parameter_AddCh1Param(13, 64, 1);
    Parameter_AddCh1Param(13, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
