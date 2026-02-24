section "b04_m5_191"{
    int var0 = Date_GetDateOption(2, 61);
    Effect_OpenParticle(1);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(5, 3, (#1));
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405191_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wow～.\nThe mountain is completely red.");
        Message_MsgSel("The leaves look like a baby's hand.", "The red and yellow trees are beautiful.", "Ah! There's a bagworm!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405191_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "When the wind blows, it's like\nthey're all waving goodbye.\nHow cute～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405191_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nNatural things are really pretty.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah!\nI made a good impression)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0405191_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "W-What? I hate bugs...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405191_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The red and yellow of the Fall\nleaves and the blue of the sky.\nIt's like a traffic light.");
        Message_MsgSel("The three primary colors.", "Doesn't it make you want to paint?", "The white clouds are also pretty.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405191_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nIt would amazing if you could use\nthose colors to make paints.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405191_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, it does.\nLet's bring tools with us next time.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(5, 3, (#1), 1);
            Voice_PlayVoice("B0405191_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, there are clouds too...\nI didn't notice...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405191_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "When fall ends, it seems like the\nscenery will turn into something\ndesolate...");
        Message_MsgSel("The trees also need time to rest.", "Living things also hibernate in winter.", "I also like scenery with few colors.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405191_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right...\nThey rest for a little while so that\nthe flowers can bloom in spring.\nThey need their rest.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405191_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Everyone rests.\nWe should also go and rest at the\ntea house over there.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405191_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I think that scenery that has more\nflowers, is more bustling, and with\nmore greenery is better, though.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405191_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But when there are few colors, it's\nhard painting that scenery.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is that so?");
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405191_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah. It's actually hard....\nAh, right.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405191_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "When it gets a little colder, do you\nwant to come here and paint?");
                Message_Who(0);
                Message_MsgDisp("主人公", "But I don't think I can paint well.");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405191_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You don't have to worry about\npainting well.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405191_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "If you paint what you want, and\ncherish the feelings of that\nparticular moment, your painting\nwill shine.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Shine?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405191_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Just by being with you, my paintings\nshine....\nIt would be nice if it were the same\nfor you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
