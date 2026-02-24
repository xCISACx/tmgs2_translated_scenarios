section "h46_m6_000"{
    int var0 = 0;
    if (Parameter_GetCh1Param(2, 25) == 1){
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            if (Parameter_GetCh1Param(6, 130) <= 3){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(6, "M6_15F", 0);
                Voice_PlayVoice("H4606000_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Alright! We won! You've worked hard!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.\nYou've worked hard too,\n｛Amachi＊＊｝!");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4606000_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Our Baseball Club is good.\nBut I think it was thanks to our\ncheering too!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\nIt was worth putting my all into\ncheering!)");
                }
            else {
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(6, "M6_15F", 0);
                Voice_PlayVoice("H4606000_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "We won, Senpai! You've worked hard!\nIt was amazing!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah! Our Baseball Club was amazing!");
                Voice_PlayVoice("H4606000_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "No, no.\nThe cheerleaders were amazing! ...\nEspecially your face when you were\ncheering!!");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4606000_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Just kidding!\nBut the cheers were really awesome!\nLike it made the Cheer Squad feel\npressured to try harder!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\nIt was worth putting my all into\ncheering!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(6, 130) <= 3){
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(6, "M6_15F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "They lost... How vexing...");
                Voice_PlayVoice("H4606000_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, it can't be helped.\nIt just means they're not the best.");
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("H4606000_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, our cheering was kind of\nlacking...\nWe must both try harder.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(As expected, it's unfortunate...)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(6, "M6_15F", 0);
                Voice_PlayVoice("H4606000_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, we were close! We were so close!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. How annoying...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4606000_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Geez, don't make that face.\nWe all tried our very best to cheer.");
                Voice_PlayVoice("H4606000_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "We did make a few mistakes though.\nBut we weren't the direct cause for\nthe loss, so cheer up...\nokay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, that was unfortunate.)");
                }
            }
        }
    else {
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_15F", 0);
            if (Parameter_GetCh1Param(6, 130) <= 3){
                Voice_PlayVoice("H4606000_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yay, they won!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.\nYou've worked hard too,\n｛Amachi＊＊｝!");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4606000_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Our school is quite good.\nWe also tried our best with the\ncheers!\nWe've both worked hard!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\nIt was worth putting my all into\ncheering!)");
                }
            else {
                Voice_PlayVoice("H4606000_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "We won, Senpai! It was amazing!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!\nThe Track and Field Club was\namazing!");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4606000_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "No, no.\nThe cheerleaders were amazing! ...\nEspecially your face when you were\ncheering!!");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4606000_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Just kidding!\nBut the cheers were really awesome!\nThe victory was thanks to us\ncheering!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\nIt was worth putting my all into\ncheering!)");
                }
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(6, "M6_15F", 0);
            if (Parameter_GetCh1Param(6, 130) <= 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "They lost... How vexing...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H4606000_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, our cheering wasn't\nimpressive...\nWe both must work harder.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(As expected, it's unfortunate...)");
                }
            else {
                Voice_PlayVoice("H4606000_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, we were close! We were so close!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. How annoying...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4606000_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Geez, don't make that face.\nWe all tried our very best to cheer.");
                Voice_PlayVoice("H4606000_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So cheer up. Also..\nlet's take time to reflect on\ntoday's failure, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～, how annoying.)");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
