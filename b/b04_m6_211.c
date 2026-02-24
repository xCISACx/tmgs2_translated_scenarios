section "b04_m6_211"{
    int var0 = Date_GetDateOption(2, 63);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR310_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406211_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is it normal for a monkey to stare\nat us that way?");
            }
        else {
            Voice_PlayVoice("B0406211_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, that monkey is staring at us.");
            }
        Message_MsgSel("Maybe it's bothered by us?", "It might be scared of you.", "Let's play the staredown game with it.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406211_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "What?\nWere you waiting for something that\nhe would be bothered by to happen?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406211_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's not us.\nIt must be curious about what's in\nyour bag, Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406211_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So...?\nI don't seem to be doing anything...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406211_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... What about me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406211_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I heard it's a sign of aggresion\nwhen you make eye contact.\nIt would probably be better if you\nstopped...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406211_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It attacks whenever you make eye\ncontact.\nDid you not know that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406211_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The animals that are here...");
            }
        else {
            Voice_PlayVoice("B0406211_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The animals here...");
            }
        Message_MsgSel("There are various kinds.", "It's nice that they can eat and then sleep.", "They don`t care enough about service.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406211_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, you can't visit them all in one\nday.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 6);
                Character_ChFace(1, 4, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406211_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\nYou won't be able to see them all by\nthe end of the day!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406211_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Eat and then sleep? Senpai...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406211_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Eat and then sleep?\nSenpai, the way you talk...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406211_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "There certainly are lots of animals\nthat are sleeping.\nI want them to move around more.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406211_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, there are many of these guys\nsleeping.\nI want them to move around more.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406211_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is that a pair of birds?\nHey, they're perched in a line on a\ntree.");
            }
        else {
            Voice_PlayVoice("B0406211_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, look at those birds.\nThey're perched in a line on the\ntree.");
            }
        Message_MsgSel("It's good to be so close.", "They're talking about us.", "It's a lot like you and I, ｛Amachi＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406211_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes.\nMy heart softens when I look at\nthem.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406211_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It seems that way. Oh, one flew.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406211_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "They're talking about us...\nIt's interesting when you imagine\nit!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406211_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Such as, \"It looks up\nabsent-mindedly and opens it's\nmouth\"?\nAhaha, so you say!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406211_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uhh. So...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406211_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nThey're still together even if\nthey're all lined up.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406211_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nThey're not even lined up together.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really? You enjoy staring at them.\nIt's the same thing, right?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406211_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nWas there a time I stared at them?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh? You weren't?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406211_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well...\nLet's show those birds who's\nwatching us.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh...?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406211_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Shhh, Senpai... Please be quiet...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, but...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(W-What should I do?\n｛Amachi＊＊｝'s mood\nseems...)");
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406211_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nReally Senpai, stop making that\nface.\nIt's weird!\nI should respond to that kind of\nharassment.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Was I... just made fun of?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
