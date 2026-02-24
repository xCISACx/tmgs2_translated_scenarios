section "b04_m6_075"{
    int var0 = Date_GetDateOption(2, 22);
    Effect_OpenParticle(1);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406075_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's Fall.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406075_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It really feels like Fall.");
            }
        Message_MsgSel("The falling leaves are romantic.", "As expected, Fall is about sports!", "My appetite grows in Fall, as usual.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406075_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really? ... Romantic, huh....\nI don't know.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406075_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The falling leaves are romantic?\nI think that it would be a tough job\ncleaning it up.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406075_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Eh, so you're actually the active\ntype, Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406075_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Eh, so you're actually the active\ntype, Senpai.\nI prefer eating over sports!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406075_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes!\nSince there are so many delicious\nthings to eat in Fall, don't you\nfind it difficult to choose?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406075_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah!\nThere are many yummy foods in Fall.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 3, 4);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406075_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, gingko nuts. Whoa...\na lot are falling.\nIt seems like stepping on them will\nhurt.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406075_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Whoa, gingko nuts!\nAnd there are tons falling...\nIt'd hurt to step on them.");
            }
        Message_MsgSel("Let's run so that we don't step on them.", "Let's take a detour.", "Let's collect them and eat them.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406075_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is it a race?\nSounds interesting, let's do it!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406075_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, a race?\nAlright, the person who loses treats\nthe other to juice.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406075_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Even though it's a detour, it seems\nnice.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406075_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's a detour, but we should be sure\nwe don't step on them there.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406075_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I don't like gingko nuts.\nI can't handle that smell...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406075_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Gingko nuts are bitter and gross.\nI'll pass.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406075_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "If you look closely, there are a lot\nof couples.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406075_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "For some reason, there are many\ncouples.");
            }
        Message_MsgSel("Does this place have a certain mood?", "Don't pay attention, they're madly in love.", "It's quite cold though.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406075_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "What mood is there?\nI don't really understand.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406075_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "There's... a mood?\nI'd get it if it was a little\ndarker, and there was some\nlighting...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406075_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nYour face has turned weird, Senpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406075_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Senpai! You're staring too much!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Voice_PlayVoice("B0406075_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nThen should we also fall madly in\nlove?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406075_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nJoking～");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406075_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I couldn't help but say that to\nsurprise you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Amachi＊＊｝...?");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406075_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You're harsh, Senpai....\nBut I feel the same.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406075_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I think so too!\nSo let's hurry and go to a warm\nplace.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
