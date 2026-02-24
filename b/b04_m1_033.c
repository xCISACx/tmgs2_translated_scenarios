section "b04_m1_033"{
    int var0 = Date_GetDateOption(2, 6);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0401033_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "How massive...\nBut sharks have a relatively blank\nfacial expression.");
        Message_MsgSel("They don't feel scary, as they have love.", "It's like we'll get swallowed by them!", "It seems like it was hard to get them here.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0401033_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "They came from being carefree in the\nocean.\nWhen I think about it, it's a little\npitiful.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401033_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah. It looks like a carp banner...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401033_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right...\nWell, it's not as if they swam here\nby themselves.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0401033_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Although whale sharks have a large\nbody, I wonder how smart they are.");
        Message_MsgSel("Perhaps they're smarter?", "They're no match for you!", "Their eyes have a gentle feeling.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401033_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Pfft... Quit it.\nYou know it'd be too much to bear if\nI was beaten by a fish.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401033_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'll be damned if they were a match\nfor me.\nAnd what kind of a compliment is\nthat?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401033_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It seems like you treat all living\nthings nicely.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0401033_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "At any rate, they're huge...\nI wonder what they ate to get so\nbig?");
        Message_MsgSel("They feed on small fish and plankton.", "Maybe they even eat humans...", "Become larger by fulfilling your dreams!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401033_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, I see.\nThey eat the same things whales do.\nAs expected, they eat small fish for\ncalcium?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401033_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "As if they would.\nBut if they came across a human in\nthe sea, they'd kind of just go for\nit, right?\nYeah.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401033_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "......... Okay, let's move on.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0401033_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "As if you could get full with\ndreams!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0401033_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "...\nThat's my father's favorite phrase.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Your father's?");
                Voice_PlayVoice("B0401033_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah.\nHe's the exact opposite of my\ngrandpa.\nIt's kind of unbelievable that we\nare father and son.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is he a realistic person?");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(1, 3, (#1));
                Voice_PlayVoice("B0401033_A01600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Well, somewhat.\nBut apparently, before I was born,\nhe went through hardship because he\nwas poor.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really...");
                Character_BlinkStart(1, 0, (#1));
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0401033_A01700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "But I'm not going to be like that.");
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401033_A01800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Even if I don't fulfil my dreams,\nI'm can still get a taste of my\ndream life.\nI believe in that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
