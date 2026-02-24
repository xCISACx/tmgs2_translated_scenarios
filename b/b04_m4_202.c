section "b04_m4_202"{
    int var0 = Date_GetDateOption(2, 16);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404202_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "The winter sea is entirely different\nfrom the other seasons.");
        Message_MsgSel("I feel a little sentimental.", "I wonder if there are any sea urchins...", "That lovey-dovey couple looks warm.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404202_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, I guess.\nYou can feel how vast it is in a\nstrange way...\nIt changes even when it's not\npopular.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404202_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Sounds good, go search for one, then\ncome back....\nI'll go home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404202_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Rather than saying lovey-dovey,\nmaybe it's due to the cold that\nthey're cuddling themselves, right?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404202_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "The sound of the wind is amazing...");
        Message_MsgSel("I can't hear you, speak louder!", "The waves can be really powerful too.", "It's probably the cry of the sea.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0404202_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "The sound of the wind!\nI said it's amazing!\nHow about this!?\nA powerful voice of a vocalist!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404202_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah.\nThat splashing sound and the waves\nare like in the movies.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404202_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I see, that's the term you use for\nthe sound of the wind.\nHowever, the sound has a nice ring\nto it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404202_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Things like this...\nWhen you see no one at the beach in\nwinter, it makes me feel uneasy..");
        Message_MsgSel("I see, ｛Hariya＊＊｝ is lonely.", "Let's make those feelings into a song!", "It feels like we're on　a different planet.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404202_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nIt's fine, it's just occasionally.\nI'm not a cold person, anyway...\nin a way.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404202_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It's too cold, I don't feel like it.\nI'll pass.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404202_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... I guess.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404202_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hmmm...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝, he's\nserious...)");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 5);
                Character_ChFace(0, 2, 1);
                Voice_PlayVoice("B0404202_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nIn this cold wind, we embraced...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404202_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "As we hold hands, our eyes met and\nour warm lips touched...");
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404202_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "...... ｛Hariya＊＊｝?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404202_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "The end!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404202_D01700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I can't think in this, it's too\ncold.\nLet's go home.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay...");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404202_D01800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... However, now...\nI definitely want to finish this up.\nWhen that time comes, will you\nlisten to it again?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404202_D01900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's it!\nThe human race and everyone will be\ngone, except for us!\nAh, I feel refreshed.");
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
